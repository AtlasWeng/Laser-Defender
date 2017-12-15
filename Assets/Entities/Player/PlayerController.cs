using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public float shipSpeed = 1f;
	public float padding = 1f;

	// restrict the play movement
	float xMax;
	float xMin;

	// Use this for initialization
	void Start () {
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftMost = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, distance));
		Vector3 rightMost = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, distance));
		xMin = leftMost.x + padding;
		xMax = rightMost.x - padding;
	}
	
	// Update is called once per frame
	void Update ()
	{
		//transform.position += new Vector3(shipSpeed, 0, 0) * Input.GetAxis("Horizontal") * Time.deltaTime;
		if (Input.GetKey (KeyCode.LeftArrow)) {
			//transform.position += new Vector3 (-shipSpeed, 0, 0) * Time.deltaTime;
			transform.position += Vector3.left * shipSpeed * Time.deltaTime;
		} else if (Input.GetKey (KeyCode.RightArrow)) {
			//transform.position += new Vector3 (shipSpeed, 0, 0) * Time.deltaTime;
			transform.position += Vector3.right *shipSpeed * Time.deltaTime;
		}

		// restrict the player to the game space
		float limitX = Mathf.Clamp(transform.position.x, xMin,xMax);
		transform.position = new Vector3(limitX, transform.position.y, transform.position.z);
	}
}
