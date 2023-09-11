extends GDExample

func _physics_process(delta: float) -> void:
	for i in 1000:
		# Leaks
		var data: Dictionary = get_data()
		
		# This doesn't
		var other_data: Dictionary = get_other_data()
