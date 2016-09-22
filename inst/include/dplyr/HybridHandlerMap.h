#ifndef dplyr_dplyr_HybridHandlerMap_H
#define dplyr_dplyr_HybridHandlerMap_H

#include <tools/hash.h>
#include <dplyr/HybridHandler.h>

typedef dplyr_hash_map<SEXP,HybridHandler> HybridHandlerMap;

void install_simple_handlers(HybridHandlerMap& handler);

bool hybridable(RObject arg);

#endif // dplyr_dplyr_HybridHandlerMap_H