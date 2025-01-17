#ifndef STELLA_VSLAM_IO_TRAJECTORY_IO_H
#define STELLA_VSLAM_IO_TRAJECTORY_IO_H

#include <string>

namespace stella_vslam {

namespace data {
class map_database;
} // namespace data

namespace io {

class trajectory_io {
public:
    /**
     * Constructor
     */
    explicit trajectory_io(data::map_database* map_db);

    /**
     * Destructor
     */
    ~trajectory_io() = default;

    /**
     * Save the frame trajectory in the specified format
     */
    void save_frame_trajectory(const std::string& path, const std::string& format) const;

    /**
     * Save the keyframe trajectory in the specified format
     */
    void save_keyframe_trajectory(const std::string& path, const std::string& format) const;
    ////////////////////////////////////////////////////////////////////////////////
    void save_map_points_with_keyframe_pose(const std::string& path) const;
    ////////////////////////////////////////////////////////////////////////////////

private:
    //! map_database
    data::map_database* const map_db_ = nullptr;
};

} // namespace io
} // namespace stella_vslam

#endif // STELLA_VSLAM_IO_TRAJECTORY_IO_H
