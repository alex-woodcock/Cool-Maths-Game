using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerScript : MonoBehaviour {
    Animator anim = new Animator();
	// Use this for initialization
	void Start () {
        anim = this.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Animate(int shadow)
    {
        Debug.Log(shadow);
        if (shadow == 0)
        {
            anim.Play("playerBlue");
        }
        else if (shadow == 1)
        {
            anim.Play("playerGreen");
        }
        else if (shadow == 2)
        {
            anim.Play("playerRed");
        }
        else
        {
            anim.Play("playerYellow");
        }
    }
}
