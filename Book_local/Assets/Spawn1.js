﻿#pragma strict

var bullet:Rigidbody2D;
var speed:float = 20f;
//var Hit = Input.GetKey(KeyCode.Ctrl);
function Start () {
	
}

function Update () {
    var bulletInstance:Rigidbody2D;
    if(Input.GetButtonDown("Fire1")&& Hit.hit == false){
        bulletInstance = Instantiate(bullet,transform.position,Quaternion.Euler(new Vector3(0,0,0)));
        bulletInstance.velocity = new Vector2(speed,0);
        bulletInstance.name = "Bullet";
    }
}
