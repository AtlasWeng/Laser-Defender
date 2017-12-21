using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehavior : MonoBehaviour {
	public float enemyHealth = 200f;

	// Enemy attack way
	public float projectileSpeed = 1f;
	public GameObject projectilePrefab;
	public float shotsPerSeconds = .5f;

	// variable about score
	ScoreKeeper scoreKeeper;
	public int scoreValue = 150;

	// SFX
	public AudioClip enemyFiresSFX;
	public AudioClip enemyDestroiedSFX;

	void Start(){
		// define the score keeper
		scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
	}

	void OnTriggerEnter2D (Collider2D collider)
	{
		Projectile laser = collider.gameObject.GetComponent<Projectile> ();
		if (laser) {
			enemyHealth -= laser.GetDamage();
			laser.Hit();
			if (enemyHealth <= 0) {
				Die();
			}
		}
	}

	void Die(){
		AudioSource.PlayClipAtPoint(enemyDestroiedSFX, transform.position);
		Destroy(gameObject);
		scoreKeeper.Score(scoreValue);
	}

	void EnemyFire(){
		GameObject projectile = Instantiate(projectilePrefab, transform.position, Quaternion.Euler(180, 0, 0));
		projectile.GetComponent<Rigidbody2D>().velocity = Vector2.down * projectileSpeed;
		AudioSource.PlayClipAtPoint(enemyFiresSFX, transform.position);
	}

	void Update ()
	{
		float probability = shotsPerSeconds * Time.deltaTime;
		if (probability > Random.value) {
			EnemyFire();
		}
	}


}
