python3 run.py --problem Elasticity  --degree 1 8 --form_compiler=ffcx --action --global_size 10000000 --output_file=output/elasticity.csv --conf compilers-generic.yaml
python3 run.py --problem Laplacian  --degree 1 8 --form_compiler=ffcx --action --global_size 10000000 --output_file=output/laplacian.csv --conf compilers-generic.yaml
