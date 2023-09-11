#pragma once

#include "godot_cpp/classes/node2d.hpp"
#include "godot_cpp/variant/dictionary.hpp"

using namespace godot;

class GDExample : public Node2D {
	GDCLASS(GDExample, Node2D);

protected:
	static void _bind_methods();

public:
	GDExample();
	~GDExample();

	Dictionary get_data() const;
	Dictionary get_other_data() const;
};
