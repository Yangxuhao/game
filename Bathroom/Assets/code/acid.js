#pragma strict

function Start () {
	
}

function Update () {
	
}
function OnCollisionEnter2D(other:Collision2D){
	if(other.gameObject.name=="spongy"){
	Destroy(gameObject);
	}
}