#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "data.h"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& copy);
		// ~Serializer();
		// Serializer &operator=(const Serializer& copy);
	
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif