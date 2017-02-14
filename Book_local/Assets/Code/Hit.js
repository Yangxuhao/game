#pragma strict
var gameObjects : GameObject[];
static var hit:boolean = false;

function Removal(){
  gameObjects = GameObject.FindGameObjectsWithTag("Bullet");

  for(var i = 1;i < gameObjects.length;i++)
  Destroy(gameObjects[i]);
}
function OnCollisionEnter2D(other:Collision2D){
  if(other.gameObject.name =="Bullet1"){
  Removal();
  Destroy(gameObject);
  hit = true;
  }
}
	

