using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class autoresizeScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
        //GetComponent<RectTransform>().sizeDelta = new Vector2((float)Screen.height / 1440f * 1200f, (float)Screen.width / 2960f * 600f);
        //Debug.Log("width" + Screen.width);
        //Debug.Log("height"+Screen.height);
        GetComponent<RectTransform>().position = new Vector2((float)Screen.width / 2960f * 1200f + 0.5f * Screen.width, (float)Screen.height / 1440f * 480f + 0.5f * Screen.height);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
