using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioScript : MonoBehaviour {
    public AudioSource audio;
    public AudioClip musicClip;

    // Use this for initialization
    void Start () {
        //audio = GetComponent<AudioSource>();
        audio.clip = musicClip;
        audio.Play();
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
