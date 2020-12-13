class GptHeader {
public:
    uint64_t signature;
    // Revision consists of 4 digits
    uint8_t revision[4];
    uint32_t headerSize;
    uint32_t headerCrc32;
    uint32_t reserved;
    uint64_t myLba;
    uint64_t alternateLba;
    uint64_t firstUsableLba;
    uint64_t lastUsableLba;
    // 16 bytes
    UUID diskGuid;
    uint64_t partitionEntryLba;
    uint32_t numberOfPartitionEntries;
    uint32_t sizeOfPartitionEntry;
    uint32_t partitionEntryArrayCrc32;
};