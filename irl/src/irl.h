#pragma once

/*
	main irl header
*/

#include "config.h"
#include "types.h"
#include <string>

namespace irl {

	struct Error {
		std::string errorString;
		int32_t errorCode;
	};

	EXPORT void InitVulcan();

}