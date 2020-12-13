class GptPartitionEntry {
public:
    UUID partitionTypeGuid;
    UUID uniquePartitionGuid;
    uint64_t startingLba;
    uint64_t endingLba;
    uint64_t attributes;
    // Encoded using UTF-16LE
    char16_t partitionName[36];
};