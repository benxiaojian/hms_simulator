/** Generated by xsd2c*/
#ifndef __CallVar_H__
#define __CallVar_H__



#ifndef _DESERIALIZER_DISABLE_
	#include <libxml/parser.h>
#endif


#define TO_CALLVAR(derived) (derived->__base) 


#ifdef __cplusplus
extern "C" {
#endif 


/**
 *	OBJECT: CallVar
 */
struct CallVar
{
	char* name;
	char* type;
};

/**
 *	LIST: CallVar_List
 */
struct CallVar_List
{
	struct CallVar* value;
	struct CallVar_List* next;
};


struct CallVar* CallVar_Create();
void CallVar_Free(struct CallVar* obj);
void CallVar_Sax_Serialize(struct CallVar* obj,
		 const char *root_element_name,
		 void (*OnStartElement)(const char* element_name, int attr_count, char **keys, char **values, void* userData),
		 void (*OnCharacters)(const char* element_name, const char* chars, void* userData),
		 void (*OnEndElement)(const char* element_name, void* userData),
		 void* userData);

#ifndef _DESERIALIZER_DISABLE_
struct CallVar* CallVar_Deserialize(xmlNodePtr xmlRoot);
#endif

void CallVar_Set_name(struct CallVar* obj, const char* name);
void CallVar_Set_type(struct CallVar* obj, const char* type);
char* CallVar_Get_name(struct CallVar* obj);
char* CallVar_Get_type(struct CallVar* obj);


#ifdef __cplusplus
};
#endif /*__cplusplus*/



#endif