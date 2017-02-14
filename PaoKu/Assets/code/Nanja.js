#pragma strict

var animator:Animator;

function Start () {
	animator = GetComponent("Animator");
}

function FixedUpdate(){
	MoveCharacter();
}
function MoveCharacter(){
	animator.SetBool("Run",true);
	if(Input.GetKey(KeyCode.W)){
	animator.SetBool("Jump",true);
	animator.SetBool("Run",false);
	}else{
	animator.SetBool("Jump",false);
	}
	if(Input.GetKey(KeyCode.S)){
	animator.SetBool("Slide",true);
	animator.SetBool("Run",false);
	}else{
	animator.SetBool("Slide",false);
	}
}