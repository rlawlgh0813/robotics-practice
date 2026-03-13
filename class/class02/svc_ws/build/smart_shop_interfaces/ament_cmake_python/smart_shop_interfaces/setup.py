from setuptools import find_packages
from setuptools import setup

setup(
    name='smart_shop_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('smart_shop_interfaces', 'smart_shop_interfaces.*')),
)
