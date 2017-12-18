using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public float shipSpeed = 1f;
	public float padding = 1f;
	public GameObject projectile;
	public float beamSpeed = 1f;
	public float beamRate = .3f;
	public float health = 300f;

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

	void Fire(){
		Vector3 startPosition = transform.position + new Vector3(0, 0.75f, 0);
		GameObject beam = Instantiate(projectile, startPosition, Quaternion.identity) as GameObject;
		beam.GetComponent<Rigidbody2D>().velocity = Vector2.up * beamSpeed;
	}

	void OnTriggerEnter2D (Collider2D collider)
	{
		Projectile laser = collider.gameObject.GetComponent<Projectile> ();
		if (laser) {
			Debug.Log ("hit the player");
			health -= laser.GetDamage();
			laser.Hit();
			if (health <= 0) {
				Destroy(gameObject);
			}
		}
	}

	// Update is called once per frame
	void Update ()
	{
		// Instantiate the projectile
		if (Input.GetKeyDown (KeyCode.Space)) {
			InvokeRepeating ("Fire", .000001f, beamRate);
		} else if (Input.GetKeyUp (KeyCode.Space)) {
			CancelInvoke();
		}

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
