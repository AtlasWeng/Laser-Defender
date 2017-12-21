using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MusicPlayer : MonoBehaviour {
	static MusicPlayer instance = null;

	// SFX
	public AudioClip startClip;
	public AudioClip gameClip;
	public AudioClip endClip;

	// set the components
	AudioSource _audio;

	void Awake(){
		_audio = GetComponent<AudioSource>();
	}

	private void OnEnable ()
	{
		SceneManager.sceneLoaded += OnSceneLoaded;
	}

	private void OnSceneLoaded (Scene scene, LoadSceneMode mode)
	{
		_audio.Stop();
		if (scene.name == "Start Menu") {
			_audio.clip = startClip;
		} else if (scene.name == "Game") {
			_audio.clip = gameClip;
		} else if (scene.name == "Win Screen") {
			_audio.clip = endClip;
		} 

		_audio.loop = true;
		_audio.Play();
	}

	void Start () {
		if (instance != null && instance != this) {
			Destroy (gameObject);
			print ("Duplicate music player self-destructing!");
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad(gameObject);
		}
	}

	private void OnDisable ()
	{
		SceneManager.sceneLoaded -= OnSceneLoaded;
	}
}
