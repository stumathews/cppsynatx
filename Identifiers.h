#ifndef IDENTIFIERS_H
#define IDENTIFIERS_H

namespace Identifiers
{
	/* IDENTIFIER
	* An identifier is a name that you define or that is defined in a library. 
	* An identifiers begins with a nondigit character, and underscore, or one of a set of nondigits
	*/

	class Identifers
	{		
		
		/* RESERVED IDENTIFIERS
		* Any identifier that starts with an underscore, followed by a capital letter
		* (A–Z) is reserved.
		* Any identifier that contains two consecutive underscores (like_ _this) is reserved, that is,
		* you cannot use such an identifier for macros, class members, global objects, or anything else.
		*/

		/* RESERVED BY THE GLOBAL NAMESPACE
		* Any identifier that starts with an underscore is reserved in the global namespace.
		* You can use such names in other contexts (i.e., class members and local names).
		*/

		/* C STANDARD RESERVED NAMES
			The C standard reserves some identifiers for future use. These identifiers fall
			into two categories: function names and macro names. Function names are
			reserved and should not be used as global function or object names; you
			should also avoid using them as "C" linkage names in any namespace. Note
			that the C standard reserves these names regardless of which headers you
			#include. The reserved function names are:
				• is followed by a lowercase letter, such as isblank
				• mem followed by a lowercase letter, such as memxyz
				• str followed by a lowercase letter, such as strtof
				• to followed by a lowercase letter, such as toxyz
				• wcs followed by a lowercase letter, such as wcstof
				• In<cmath> with f or l appended, such as cosf and sinl
		*/

		/* MACRO NAMES
			Macro names are reserved in all contexts. Do not use any of the following
			reserved macro names:
				• Identifiers that start with E followed by a digit or an uppercase letter
				• Identifiers that start with LC_ followed by an uppercase letter
				• Identifiers that start with SIG or SIG_ followed by an uppercase letter
		*/
		

	};
}

#endif