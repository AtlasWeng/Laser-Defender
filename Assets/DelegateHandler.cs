using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DelegateHandler : MonoBehaviour {

	public delegate void OnButtonClickDelegate();
	public static event OnButtonClickDelegate buttonClickDelegate;


	// calling delegate
	public void OnButtonClick ()
	{
		buttonClickDelegate();
	}
}
