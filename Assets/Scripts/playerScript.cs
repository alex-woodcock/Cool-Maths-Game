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

    public void Animate(int target)
    {
        Debug.Log(target);
        if (target == 0)
        {
            anim.Play("playerAttackBlue");
        }
        else if (target == 1)
        {
            anim.Play("playerAttackGreen");
        }
        else if (target == 2)
        {
            anim.Play("playerAttackRed");
        }
        else
        {
            anim.Play("playerAttackYellow");
        }
    }

    public void AbilityOne()
    {
        Debug.Log("playerScript RECIEVE");
        anim.Play("ultimate");
    }
}
