using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectController : MonoBehaviour {

	Renderer objRenderer;

	void Start(){
		 DelegateHandler.buttonClickDelegate += ChangePosition;
		 DelegateHandler.buttonClickDelegate += ChangeColor;
		 DelegateHandler.buttonClickDelegate += ChangeRotation;
		 objRenderer = GetComponent<Renderer>();
	}

	void ChangePosition(){
		transform.position = new Vector2 (transform.position.x + 2f, transform.position.y);
	}

	void ChangeColor(){
		objRenderer.material.color = Color.yellow;
	}

	void ChangeRotation ()
	{
		transform.Rotate(30, 0 , 0);
	}

	// unsubscribing delegate
	void OnDisable(){
		DelegateHandler.buttonClickDelegate -= ChangePosition;
		DelegateHandler.buttonClickDelegate -= ChangeColor;
		DelegateHandler.buttonClickDelegate -= ChangeRotation;
	}
}


