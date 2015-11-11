/** ExampleCallout.h

Public functions for the ExampleCallout.

Author: Jared Wright - 2015
*/

#ifndef ExampelCallout_H
#define ExampelCallout_H

#include "WFPDriver.h"

/*	The "classifyFn" callout function for this Callout.
For more information about a Callout's classifyFn, see:
http://msdn.microsoft.com/en-us/library/windows/hardware/ff544893(v=vs.85).aspx
*/
void example_classify(
	const FWPS_INCOMING_VALUES * inFixedValues,
	const FWPS_INCOMING_METADATA_VALUES * inMetaValues,
	void * layerData,
	const void * classifyContext,
	const FWPS_FILTER * filter,
	UINT64 flowContext,
	FWPS_CLASSIFY_OUT * classifyOut);

/*	The "notifyFn" callout function for this Callout.
This function manages setting up global resources and a worker thread
managed by this Callout. For more information about a Callout's notifyFn, see:
http://msdn.microsoft.com/en-us/library/windows/hardware/ff568804(v=vs.85).aspx
*/
NTSTATUS example_notify(
	FWPS_CALLOUT_NOTIFY_TYPE notifyType,
	const GUID * filterKey,
	const FWPS_FILTER * filter);

/*	The "flowDeleteFn" callout function for this Callout.
This function doesn't do anything.
http://msdn.microsoft.com/en-us/library/windows/hardware/ff550025(v=vs.85).aspx
*/
NTSTATUS example_flow_delete(
	UINT16 layerId,
	UINT32 calloutId,
	UINT64 flowContext);

#endif	// include guard