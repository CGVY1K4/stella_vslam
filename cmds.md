./run_image_slam -v ../build/orb_vocab.fbow --disable-mapping --eval-log-dir ../../test_data/map_results/0201_localization -c ../../stella_vslam/example/rist_stereo360.yaml -d ../../test_data/0203_4k -i ../../test_data/map_results/newton_eh_+_3rd_floor_1.msg -o ../../test_data/map_results/0203_localization.msg


./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_+_3rd_floor_1+2 -c ../../stella_vslam/example/rist_stereo360.yaml -m ../../test_data/3rd_floor_2.mp4 -i ../../test_data/map_results/newton_eh_+_3rd_floor_1.msg -o ../../test_data/map_results/newton_eh_+_3rd_floor_1+2.msg


### localization (view)
./run_image_slam -v ../build/orb_vocab.fbow -c ../../stella_vslam/example/rist_stereo360.yaml -i ../../test_data/map_results/newton_eh_ver6/newton_eh_ver6.msg --disable-mapping -d .

### max_num_keypoints parameter 연구

`max_num_keypoints: 8000` 으로 설정하고 돌림

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver2 -c ../../stella_vslam/example/rist_stereo360_modified.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver2.msg

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver1 -c ../../stella_vslam/example/rist_stereo360.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver1.msg

확인 결과 max_num_keypoints는 사용 안되는 것 같다

## min_size

`min_size: 200` 으로 설정하고 돌림

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver2 -c ../../stella_vslam/example/rist_stereo360_modified.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver2.msg


`min_size: 0` 으로 설정하고 돌림

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver3 -c ../../stella_vslam/example/rist_stereo360_modified.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver3.msg


min_size 0으로 했을 때 pc가 더 dense하게 나오는 것으로 보임



## ver 4

* scale_factor=1.1
* num_covisibilities_for_landmark_generation=10
* num_covisibilities_for_landmark_fusion=10

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver4 -c ../../stella_vslam/example/rist_stereo360_modified.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver4.msg



## ver 5

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver5 -c ../../stella_vslam/example/rist_stereo360_modified_ver5.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver5.msg

마스크 적당히 있는게 좋음
[x_min, x_max, y_min, y_max]


## ver 6

* scale_factor=1.1
* num_covisibilities_for_landmark_generation=20
* num_covisibilities_for_landmark_fusion=20

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/newton_eh_ver6 -c ../../stella_vslam/example/rist_stereo360_modified_ver6.yaml -m ../../test_data/newton_eh.mp4 -o ../../test_data/map_results/newton_eh_ver6/newton_eh_ver6.msg



# 0221_short.mp4

## ver 1
./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_short_ver1 -c ../../stella_vslam/example/rist_stereo360_modified_ver7.yaml -m ../../test_data/0221_short.mp4 -o ../../test_data/map_results/0221_short_ver1/0221_short_ver1.msg

## ver 2
`num_final_matches_threshold: 20 	# default 40`
./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_short_ver2 -c ../../stella_vslam/example/rist_stereo360_modified_ver8.yaml -m ../../test_data/0221_short.mp4 -o ../../test_data/map_results/0221_short_ver2/0221_short_ver2.msg

## ver 2
`num_final_matches_threshold: 40 	# default 40`
`reject_by_graph_distance: false	# default false`
./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_short_ver3 -c ../../stella_vslam/example/rist_stereo360_modified_ver9.yaml -m ../../test_data/0221_short.mp4 -o ../../test_data/map_results/0221_short_ver3/0221_short_ver3.msg

# 0221_full.mp4

## ver 1
./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_full_ver1 -c ../../stella_vslam/example/rist_stereo360_modified_ver7.yaml -m ../../test_data/0221_full.mp4 -o ../../test_data/map_results/0221_full_ver1/0221_full_ver1.msg



# 0221_loop_short.mp4

## ver 1
./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_loop_short_ver1 -c ../../stella_vslam/example/rist_stereo360_modified_ver9.yaml -m ../../test_data/0221_loop_short.mp4 -o ../../test_data/map_results/0221_loop_short_ver1/0221_loop_short_ver1.msg


## ver 2
`use_fixed_seed: true`

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_loop_short_ver2 -c ../../stella_vslam/example/rist_stereo360_modified_ver10.yaml -m ../../test_data/0221_loop_short.mp4 -o ../../test_data/map_results/0221_loop_short_ver2/0221_loop_short_ver2.msg

./run_video_slam -v ../build/orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_loop_short_ver2-2 -c ../../stella_vslam/example/rist_stereo360_modified_ver10.yaml -m ../../test_data/0221_loop_short.mp4 -o ../../test_data/map_results/0221_loop_short_ver2-2/0221_loop_short_ver2-2.msg

# 0221_loop_full.mp4

## ver 1
./run_video_slam -v ../../orb_vocab.fbow --eval-log-dir ../../test_data/map_results/0221_loop_full_ver1 -c ../../stella_vslam/example/rist_stereo360_modified_ver10.yaml -m ../../test_data/0221_loop_full.mp4 -o ../../test_data/map_results/0221_loop_full_ver1/0221_loop_full_ver1.msg


