class GptPartitionEntry {
public:
    UUID partitionTypeGuid;
    UUID uniquePartitionGuid;
    uint64_t startingLba;
    uint64_t endingLba;
    uint64_t attributes;
    uint8_t partitionName[72];
};