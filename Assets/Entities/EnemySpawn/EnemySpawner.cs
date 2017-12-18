using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {
	public GameObject enemyPrefab;
	public float spawnWidth = 10f;
	public float spawnHeight = 5f;


	// define the screen size


	// Moving the enemy formation
	public float padding = 0f;
	public float movingSpeed = 1f;
	public bool movingRight = false;
	private float xMax;
	private float xMin;
	//private int direction = 1;

	// Use this for initialization
	void Start ()
	{
		foreach (Transform child in transform) {
			GameObject enemy = Instantiate (enemyPrefab, child.transform.position, Quaternion.identity) as GameObject;
			enemy.transform.parent = child.transform;
		}

		// define the boundary of the scree
		Vector3 leftMost;
		Vector3 rightMost;
		float distance = transform.position.z - Camera.main.transform.position.z;
		leftMost = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, distance));
		rightMost = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, distance));
		xMax = rightMost.x - padding;
		xMin = leftMost.x + padding;
	}

	void OnDrawGizmos(){
		Gizmos.DrawWireCube(transform.position, new Vector3(spawnWidth, spawnHeight));
	}

	// Update is called once per frame
	void Update ()
	{
//		transform.position += new Vector3(movingSpeed, 0 , 0) * direction * Time.deltaTime;
//		if (transform.position.x + spawnWidth / 2 >= xMax) {
//			Debug.Log("touch right edge");
//			direction = -1;
//		} else if (transform.position.x - spawnWidth / 2 < xMin) {
//			Debug.Log("touch left edge");
//			direction = 1;
//		}
		if (movingRight) {
			transform.position += Vector3.right * movingSpeed * Time.deltaTime;
		} else if (!movingRight) {
			transform.position += Vector3.left * movingSpeed * Time.deltaTime;
		} 

		float rightEdgeOfFormation = transform.position.x + (.5f * spawnWidth);
		float leftEdgeOfFormation = transform.position.x - (.5f * spawnWidth);
		if (rightEdgeOfFormation >= xMax) {
			movingRight = false;
		} else if (leftEdgeOfFormation <= xMin) {
			movingRight = true;
		}
	}
}
