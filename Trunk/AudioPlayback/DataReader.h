#pragma once

// Link the network module and the audio record module
// Keep feeding data as long as we have data

void StartDataFeederThread( ClientNetwork *DataReader, AudioBufferStore *Buffer );