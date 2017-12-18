using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehavior : MonoBehaviour {
	public float enemyHealth = 200f;

	// Enemy attack way
	public float projectileSpeed = 1f;
	public GameObject projectilePrefab;
	public float shotsPerSeconds = .5f;

	void OnTriggerEnter2D (Collider2D collider)
	{
		Projectile laser = collider.gameObject.GetComponent<Projectile> ();
		if (laser) {
			enemyHealth -= laser.GetDamage();
			laser.Hit();
			if (enemyHealth <= 0) {
				Destroy(gameObject);
			}
		}
	}

	void EnemyFire(){
		Vector3 startPosition = transform.position + new Vector3(0, -.75f, 0);
		GameObject projectile = Instantiate(projectilePrefab, startPosition, Quaternion.Euler(180, 0, 0));
		projectile.GetComponent<Rigidbody2D>().velocity = Vector2.down * projectileSpeed;
	}

	void Update ()
	{
		float probability = shotsPerSeconds * Time.deltaTime;
		if (probability > Random.value) {
			EnemyFire();
		}

	}
}
