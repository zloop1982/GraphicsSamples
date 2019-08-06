//----------------------------------------------------------------------------------
// File:        vk10-kepler\BasicDeviceGeneratedCommandsVk/vk_nvx_device_generated_commands.h
// SDK Version: v3.00 
// Email:       gameworks@nvidia.com
// Site:        http://developer.nvidia.com/
//----------------------------------------------------------------------------------
/*-----------------------------------------------------------------------
Copyright (c) 2016, NVIDIA. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
* Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
* Neither the name of its contributors may be used to endorse
or promote products derived from this software without specific
prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
-----------------------------------------------------------------------*/

#ifndef VK_NVX_DEVICE_GENERATED_COMMANDS_H__
#define VK_NVX_DEVICE_GENERATED_COMMANDS_H__

#include <vulkan/vulkan.h>
#include <assert.h>

// On Android, the NDK includes a possibly old vulkan.h, so we need to define the extension ourselves
#if !defined(VK_NVX_device_generated_commands) || (VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION < 3)

#define VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX 1000086000
#define VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX 1000086001
#define VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX 1000086002
#define VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX 1000086003

#define VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX 0x00020000
#define VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX 0x00020000

#define VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX 0x00040000

#define VK_NVX_device_generated_commands 1
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkObjectTableNVX)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkIndirectCommandsLayoutNVX)

#define VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION 3
#define VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME "VK_NVX_device_generated_commands"


typedef enum VkIndirectCommandsTokenTypeNVX {
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX = 0,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX = 1,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX = 2,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX = 3,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX = 4,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX = 5,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX = 6,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX = 7,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_BEGIN_RANGE_NVX = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_END_RANGE_NVX = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_RANGE_SIZE_NVX = (VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX - VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX + 1),
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_MAX_ENUM_NVX = 0x7FFFFFFF
} VkIndirectCommandsTokenTypeNVX;

typedef enum VkObjectEntryTypeNVX {
    VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX = 0,
    VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX = 1,
    VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX = 2,
    VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX = 3,
    VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX = 4,
    VK_OBJECT_ENTRY_TYPE_BEGIN_RANGE_NVX = VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,
    VK_OBJECT_ENTRY_TYPE_END_RANGE_NVX = VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,
    VK_OBJECT_ENTRY_TYPE_RANGE_SIZE_NVX = (VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX - VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX + 1),
    VK_OBJECT_ENTRY_TYPE_MAX_ENUM_NVX = 0x7FFFFFFF
} VkObjectEntryTypeNVX;


typedef enum VkIndirectCommandsLayoutUsageFlagBitsNVX {
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX = 0x00000001,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX = 0x00000002,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX = 0x00000004,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX = 0x00000008,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_FLAG_BITS_MAX_ENUM_NVX = 0x7FFFFFFF
} VkIndirectCommandsLayoutUsageFlagBitsNVX;
typedef VkFlags VkIndirectCommandsLayoutUsageFlagsNVX;

typedef enum VkObjectEntryUsageFlagBitsNVX {
    VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX = 0x00000001,
    VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX = 0x00000002,
    VK_OBJECT_ENTRY_USAGE_FLAG_BITS_MAX_ENUM_NVX = 0x7FFFFFFF
} VkObjectEntryUsageFlagBitsNVX;
typedef VkFlags VkObjectEntryUsageFlagsNVX;

typedef struct VkDeviceGeneratedCommandsFeaturesNVX {
    VkStructureType    sType;
    const void*        pNext;
    VkBool32           computeBindingPointSupport;
} VkDeviceGeneratedCommandsFeaturesNVX;

typedef struct VkDeviceGeneratedCommandsLimitsNVX {
    VkStructureType    sType;
    const void*        pNext;
    uint32_t           maxIndirectCommandsLayoutTokenCount;
    uint32_t           maxObjectEntryCounts;
    uint32_t           minSequenceCountBufferOffsetAlignment;
    uint32_t           minSequenceIndexBufferOffsetAlignment;
    uint32_t           minCommandsTokenBufferOffsetAlignment;
} VkDeviceGeneratedCommandsLimitsNVX;

typedef struct VkIndirectCommandsTokenNVX {
    VkIndirectCommandsTokenTypeNVX    tokenType;
    VkBuffer                          buffer;
    VkDeviceSize                      offset;
} VkIndirectCommandsTokenNVX;

typedef struct VkIndirectCommandsLayoutTokenNVX {
    VkIndirectCommandsTokenTypeNVX    tokenType;
    uint32_t                          bindingUnit;
    uint32_t                          dynamicCount;
    uint32_t                          divisor;
} VkIndirectCommandsLayoutTokenNVX;

typedef struct VkIndirectCommandsLayoutCreateInfoNVX {
    VkStructureType                            sType;
    const void*                                pNext;
    VkPipelineBindPoint                        pipelineBindPoint;
    VkIndirectCommandsLayoutUsageFlagsNVX      flags;
    uint32_t                                   tokenCount;
    const VkIndirectCommandsLayoutTokenNVX*    pTokens;
} VkIndirectCommandsLayoutCreateInfoNVX;

typedef struct VkCmdProcessCommandsInfoNVX {
    VkStructureType                      sType;
    const void*                          pNext;
    VkObjectTableNVX                     objectTable;
    VkIndirectCommandsLayoutNVX          indirectCommandsLayout;
    uint32_t                             indirectCommandsTokenCount;
    const VkIndirectCommandsTokenNVX*    pIndirectCommandsTokens;
    uint32_t                             maxSequencesCount;
    VkCommandBuffer                      targetCommandBuffer;
    VkBuffer                             sequencesCountBuffer;
    VkDeviceSize                         sequencesCountOffset;
    VkBuffer                             sequencesIndexBuffer;
    VkDeviceSize                         sequencesIndexOffset;
} VkCmdProcessCommandsInfoNVX;

typedef struct VkCmdReserveSpaceForCommandsInfoNVX {
    VkStructureType                sType;
    const void*                    pNext;
    VkObjectTableNVX               objectTable;
    VkIndirectCommandsLayoutNVX    indirectCommandsLayout;
    uint32_t                       maxSequencesCount;
} VkCmdReserveSpaceForCommandsInfoNVX;

typedef struct VkObjectTableCreateInfoNVX {
    VkStructureType                      sType;
    const void*                          pNext;
    uint32_t                             objectCount;
    const VkObjectEntryTypeNVX*          pObjectEntryTypes;
    const uint32_t*                      pObjectEntryCounts;
    const VkObjectEntryUsageFlagsNVX*    pObjectEntryUsageFlags;
    uint32_t                             maxUniformBuffersPerDescriptor;
    uint32_t                             maxStorageBuffersPerDescriptor;
    uint32_t                             maxStorageImagesPerDescriptor;
    uint32_t                             maxSampledImagesPerDescriptor;
    uint32_t                             maxPipelineLayouts;
} VkObjectTableCreateInfoNVX;

typedef struct VkObjectTableEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
} VkObjectTableEntryNVX;

typedef struct VkObjectTablePipelineEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
    VkPipeline                    pipeline;
} VkObjectTablePipelineEntryNVX;

typedef struct VkObjectTableDescriptorSetEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
    VkPipelineLayout              pipelineLayout;
    VkDescriptorSet               descriptorSet;
} VkObjectTableDescriptorSetEntryNVX;

typedef struct VkObjectTableVertexBufferEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
    VkBuffer                      buffer;
} VkObjectTableVertexBufferEntryNVX;

typedef struct VkObjectTableIndexBufferEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
    VkBuffer                      buffer;
    VkIndexType                   indexType;
} VkObjectTableIndexBufferEntryNVX;

typedef struct VkObjectTablePushConstantEntryNVX {
    VkObjectEntryTypeNVX          type;
    VkObjectEntryUsageFlagsNVX    flags;
    VkPipelineLayout              pipelineLayout;
    VkShaderStageFlags            stageFlags;
} VkObjectTablePushConstantEntryNVX;


typedef void (VKAPI_PTR *PFN_vkCmdProcessCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo);
typedef void (VKAPI_PTR *PFN_vkCmdReserveSpaceForCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo);
typedef VkResult(VKAPI_PTR *PFN_vkCreateIndirectCommandsLayoutNVX)(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout);
typedef void (VKAPI_PTR *PFN_vkDestroyIndirectCommandsLayoutNVX)(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks* pAllocator);
typedef VkResult(VKAPI_PTR *PFN_vkCreateObjectTableNVX)(VkDevice device, const VkObjectTableCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkObjectTableNVX* pObjectTable);
typedef void (VKAPI_PTR *PFN_vkDestroyObjectTableNVX)(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks* pAllocator);
typedef VkResult(VKAPI_PTR *PFN_vkRegisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX* const*    ppObjectTableEntries, const uint32_t* pObjectIndices);
typedef VkResult(VKAPI_PTR *PFN_vkUnregisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX* pObjectEntryTypes, const uint32_t* pObjectIndices);
typedef void (VKAPI_PTR *PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX)(VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX* pFeatures, VkDeviceGeneratedCommandsLimitsNVX* pLimits);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR void VKAPI_CALL vkCmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX*          pProcessCommandsInfo);

VKAPI_ATTR void VKAPI_CALL vkCmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX*  pReserveSpaceInfo);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkIndirectCommandsLayoutNVX*                pIndirectCommandsLayout);

VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkCreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX*           pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkObjectTableNVX*                           pObjectTable);

VKAPI_ATTR void VKAPI_CALL vkDestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks*                pAllocator);

VKAPI_ATTR VkResult VKAPI_CALL vkRegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const*         ppObjectTableEntries,
    const uint32_t*                             pObjectIndices);

VKAPI_ATTR VkResult VKAPI_CALL vkUnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX*                 pObjectEntryTypes,
    const uint32_t*                             pObjectIndices);

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX*       pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX*         pLimits);
#endif

#endif

extern PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX  pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX;
extern PFN_vkCmdProcessCommandsNVX             pfn_vkCmdProcessCommandsNVX;
extern PFN_vkCmdReserveSpaceForCommandsNVX     pfn_vkCmdReserveSpaceForCommandsNVX;
extern PFN_vkCreateIndirectCommandsLayoutNVX   pfn_vkCreateIndirectCommandsLayoutNVX;
extern PFN_vkDestroyIndirectCommandsLayoutNVX  pfn_vkDestroyIndirectCommandsLayoutNVX;
extern PFN_vkCreateObjectTableNVX              pfn_vkCreateObjectTableNVX;
extern PFN_vkDestroyObjectTableNVX             pfn_vkDestroyObjectTableNVX;
extern PFN_vkRegisterObjectsNVX                pfn_vkRegisterObjectsNVX;
extern PFN_vkUnregisterObjectsNVX              pfn_vkUnregisterObjectsNVX;

inline void VKAPI_CALL vkCmdProcessCommandsNVX(
  VkCommandBuffer                       commandBuffer,
  const VkCmdProcessCommandsInfoNVX*    info)
{
  assert(pfn_vkCmdProcessCommandsNVX);
  pfn_vkCmdProcessCommandsNVX(commandBuffer, info);
}

inline void VKAPI_CALL vkCmdReserveSpaceForCommandsNVX(
  VkCommandBuffer                             commandBuffer,
  const VkCmdReserveSpaceForCommandsInfoNVX*  reserveInfo)
{
  assert(pfn_vkCmdProcessCommandsNVX);
  pfn_vkCmdReserveSpaceForCommandsNVX(commandBuffer, reserveInfo);
}

inline VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNVX(
  VkDevice                                      device,
  const VkIndirectCommandsLayoutCreateInfoNVX*  pCreateInfo,
  const VkAllocationCallbacks*                  pAllocator,
  VkIndirectCommandsLayoutNVX*                  pIndirectCommandsLayout)
{
  assert(pfn_vkCreateIndirectCommandsLayoutNVX);
  return pfn_vkCreateIndirectCommandsLayoutNVX(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

inline void VKAPI_CALL vkDestroyIndirectCommandsLayoutNVX(
  VkDevice                            device,
  VkIndirectCommandsLayoutNVX         indirectCommandsLayout,
  const VkAllocationCallbacks*        pAllocator)
{
  assert(pfn_vkDestroyIndirectCommandsLayoutNVX);
  pfn_vkDestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator);
}


inline VkResult VKAPI_CALL vkCreateObjectTableNVX(
  VkDevice                            device,
  const VkObjectTableCreateInfoNVX*   pCreateInfo,
  const VkAllocationCallbacks*        pAllocator,
  VkObjectTableNVX*                   pObjectTable)
{
  assert(pfn_vkCreateObjectTableNVX);
  return pfn_vkCreateObjectTableNVX(device, pCreateInfo, pAllocator, pObjectTable);
}

inline void VKAPI_CALL vkDestroyObjectTableNVX(
  VkDevice                            device,
  VkObjectTableNVX                    resourceTable,
  const VkAllocationCallbacks*        pAllocator)
{
  assert(pfn_vkDestroyObjectTableNVX);
  pfn_vkDestroyObjectTableNVX(device, resourceTable, pAllocator);
}

inline VkResult VKAPI_CALL vkRegisterObjectsNVX(
  VkDevice                              device,
  VkObjectTableNVX                      objectTable,
  uint32_t                              objectCount,
  const VkObjectTableEntryNVX* const*   ppObjectTableEntries,
  const uint32_t*                       pObjectIndices)
{
  assert(pfn_vkRegisterObjectsNVX);
  return pfn_vkRegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices);
}

inline VkResult VKAPI_CALL vkUnregisterObjectsNVX(
  VkDevice                              device,
  VkObjectTableNVX                      objectTable,
  uint32_t                              objectCount,
  const VkObjectEntryTypeNVX*           pObjectEntryTypes,
  const uint32_t*                       pObjectIndices)
{
  assert(pfn_vkUnregisterObjectsNVX);
  return pfn_vkUnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices);
}

inline void VKAPI_CALL vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
  VkPhysicalDevice                       physicalDevice,
  VkDeviceGeneratedCommandsFeaturesNVX*  pFeatures,
  VkDeviceGeneratedCommandsLimitsNVX*    pLimits)
{
  assert(pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX);
  pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice, pFeatures, pLimits);
}


int load_VK_NVX_device_generated_commands(VkInstance instance, PFN_vkGetInstanceProcAddr getInstanceProcAddr);

#endif
