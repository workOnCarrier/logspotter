# logspotter
The smart log analyzer, that can help analyze logs across multiple processes, across multiple machines under various contexts

# Problem Statement
Inside most enterprises, a very common situation is:
A person handling a small component, that shares info with multiple components...
Whenever an error occurs, the person supporting the components has to analyze multiple application logs.
Sometimes, the context is -- based on request id.
Sometimes, the context is -- based on a specific time of the day.

# Solution:
Some intelligence has to be built to achieve the following.

## Setup:
Establish a the locations to search for.
i.e. defining the various process log meta data (data that explains the location of log data)
As of this writing, this will mean:
* Machine name
* Path (shared[windows]/ssh[Unix/Linux])
* process name  and logfilename pattern
* loging timestamp format (default to log4cpp / log4.net / log4java)

## Context:
This defines the conditions one is searching on:
As of this writing, this will be one of the following options.
* Time based lookup 
    * e.g. fetch the logs after 12:45pm -- the event, that needs to be analyzed
* token based lookup
    * e.g. a system specific identifier to be looked up across the files

Other misc features (optional):
* suppression log lines by thread-id where threadid is identifiable in the lines

