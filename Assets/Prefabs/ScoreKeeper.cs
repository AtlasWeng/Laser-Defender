using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour {
	public static int score = 0;
	private Text text;

	void Start(){
		text = gameObject.GetComponent<Text>();

	}

	public void Score (int points)
	{	
		score += points;
		text.text = score.ToString();
	}

	public static void Reset () {
		score = 0;
	}
}
