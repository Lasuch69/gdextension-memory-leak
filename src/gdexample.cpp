#include <godot_cpp/variant/utility_functions.hpp>

#include "gdexample.hpp"
#include "godot_cpp/classes/time.hpp"
#include "godot_cpp/variant/array.hpp"

using namespace godot;

void GDExample::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_data"), &GDExample::get_data);
	ClassDB::bind_method(D_METHOD("get_other_data"), &GDExample::get_other_data);
}

GDExample::GDExample() {
	// Initialize any variables here.
}

GDExample::~GDExample() {
	// Add your cleanup here.
}

// Calling from script results in memory leak!
Dictionary GDExample::get_data() const {
	Array arr;
	arr.resize(1);

	Dictionary data;
	data["position"] = get_position();
	data["time"] = Time::get_singleton()->get_ticks_msec();

	arr[0] = data;

	return arr[0];
}

// This doesn't result in a memory leak.
Dictionary GDExample::get_other_data() const {
	Dictionary data;
	data["position"] = get_position();
	data["time"] = Time::get_singleton()->get_ticks_msec();

	return data;
}
