#pragma once

namespace GVFSGvFltWrapper
{
    [System::FlagsAttribute]
    public enum class GvUpdateFailureCause : unsigned long
    {
        NoFailure = GV_UPDATE_FAILURE_CAUSE_NO_FAILURE,
        DirtyMetadata = GV_UPDATE_FAILURE_CAUSE_DIRTY_METADATA,
        DirtyData = GV_UPDATE_FAILURE_CAUSE_DIRTY_DATA,
        Tombstone = GV_UPDATE_FAILURE_CAUSE_TOMBSTONE
    };
}
