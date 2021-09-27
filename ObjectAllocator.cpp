#include "ObjectAllocator.h"

ObjectAllocator::ObjectAllocator(size_t ObjectSize, const OAConfig& config){
    
}

ObjectAllocator::~ObjectAllocator(){
}

// void* ObjectAllocator::Allocate(const char *label){

// }

void ObjectAllocator::Free(void *Object){

}

// unsigned ObjectAllocator::DumpMemoryInUse(DUMPCALLBACK fn) const {

// }

// unsigned ObjectAllocator::ValidatePages(VALIDATECALLBACK fn) const {

// }

// unsigned ObjectAllocator::FreeEmptyPages(){

// }

// void ObjectAllocator::SetDebugState(bool State){

// }

// const void* ObjectAllocator::GetFreeList() const{

// }

// const void* ObjectAllocator::GetPageList() const{

// }

OAConfig ObjectAllocator::GetConfig() const{
    return this->OAConfig_;
}

OAStats ObjectAllocator::GetStats() const{
    return this->OAStats_;
}