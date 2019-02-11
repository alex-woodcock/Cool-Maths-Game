using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioScript : MonoBehaviour {
    public AudioSource audio;
    public AudioClip musicClipLoop;
    public AudioClip musicClipIntro;
    int playState = 0;
    // Use this for initialization
    void Start () {
        //audio = GetComponent<AudioSource>();
        audio.clip = musicClipIntro;
        audio.Play();
    }
	
	// Update is called once per frame
	void Update () {
        if (!audio.isPlaying)
        {
            audio.clip = musicClipLoop;
            audio.Play();
        }
    }

}
