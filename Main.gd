extends Node2D

var googleLogin
var google_clientId = "My Google Client Id"

func _ready():
	if Engine.has_singleton("GoogleGodot"):
		googleLogin = Engine.get_singleton("GoogleGodot")
		googleLogin.init(google_clientId)



func _on_Button_pressed():
	print("Button Pressed")
	if googleLogin != null:
		print("*******\n Google Pressed \n*******")
		googleLogin.loginGoogle()

