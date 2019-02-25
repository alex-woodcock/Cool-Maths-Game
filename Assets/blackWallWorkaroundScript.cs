using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class blackWallWorkaroundScript : MonoBehaviour {
    public bool show = false;
    bool mouseOver = false;

	// Use this for initialization
	void Start () {
        GetComponent<RectTransform>().position = new Vector2(1000000f, 1000000f);
        GetComponent<RectTransform>().sizeDelta = new Vector2(0f, 0f);
    }
	
	// Update is called once per frame
	void Update () {
		if (show)
        {
            SceneManager.LoadScene("VictoryScene");
            GetComponent<RectTransform>().position = new Vector3(0f, 0f, -3f);
            GetComponent<RectTransform>().sizeDelta = new Vector2(10000f, 10000f);
        }
    }

    void OnMouseOver() { mouseOver = true; SceneManager.LoadScene("VictoryScene"); }

    void OnMouseExit() { mouseOver = false; SceneManager.LoadScene("VictoryScene"); }

    void OnMouseDown()
    {
        SceneManager.LoadScene("VictoryScene");
        if (mouseOver)
        {
            SceneManager.LoadScene("VictoryScene");
        }
    }
}
