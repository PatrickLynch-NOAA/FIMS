/*
 * File:   information.hpp
 *
 * Author: Matthew Supernaw, Andrea Havron
 * National Oceanic and Atmospheric Administration
 * National Marine Fisheries Service
 * Email: matthew.supernaw@noaa.gov, andrea.havron@noaa.gov
 *
 * Created on September 30, 2021, 11:47 PM
 *
 * This File is part of the NOAA, National Marine Fisheries Service
 * Fisheries Integrated Modeling System project.
 *
 * This software is a "United States Government Work" under the terms of the
 * United States Copyright Act.  It was written as part of the author's official
 * duties as a United States Government employee and thus cannot be copyrighted.
 * This software is freely available to the public for use. The National Oceanic
 * And Atmospheric Administration and the U.S. Government have not placed any
 * restriction on its use or reproduction.  Although all reasonable efforts have
 * been taken to ensure the accuracy and reliability of the software and data,
 * the National Oceanic And Atmospheric Administration and the U.S. Government
 * do not and cannot warrant the performance or results that may be obtained by
 * using this  software or data. The National Oceanic And Atmospheric
 * Administration and the U.S. Government disclaim all warranties, express or
 * implied, including warranties of performance, merchantability or fitness
 * for any particular purpose.
 *
 * Please cite the author(s) in any work or product based on this material.
 *
 */
#ifndef FIMS_COMMON_INFORMATION_HPP
#define FIMS_COMMON_INFORMATION_HPP

#include <map>
#include <memory>
#include <vector>
#include "model_object.hpp"
#include "../interface/interface.hpp"
#include "../population_dynamics/recruitment/recruitment.hpp"
#include "../population_dynamics/selectivity/selectivity.hpp"
#include "../population_dynamics/population/population.hpp"
#include "../population_dynamics/growth/growth.hpp"
#include "../population_dynamics/fleet/fleet.hpp"
#include "data_object.hpp"


namespace fims {


    //temporary
    template<class Type>
    struct RecruitmentBase;

    template<typename T>
    struct SelectivityBase;

    template<typename T>
    struct GrowthBase;

    template<typename T>
    struct Population;

    /**
     * Contains all objects and data pre-model construction
     */
    template<typename Type>
    class Information {

        typedef fims::FIMSTrait<T>::variable_t variable_t;
        typedef fims::FIMSTrait<T>::real_t real_t;
        std::vector<variable_t*> parameters; //list of all estimated parameters
        std::vector<variable_t*> random_effects_parameters; //list of all random effects parameters
        std::vector<variable_t*> fixed_effects_parameters; //list of all fixed effects parameters

        //data objects
        std::map<uint32_t, std::shared_ptr<fims::DataObject<double> > data_objects;
        //sub-models
        std::map<uint32_t, std::shared_ptr<fims::RecruitmentBase<Type> > recruitment_models;
        std::map<uint32_t, std::shared_ptr<fims::SelectivityBaseType> > selectivity_models;
        std::map<uint32_t, std::shared_ptr<fims::GrowthBase<Type> > growth_models;
        std::map<uint32_t, std::shared_ptr<fims::Population<Type> > populations;

        uint32_t nsexes;

        bool CreateModel() {

        }

        std::string ToJSON() {

        }

    };

}




#endif /* FIMS_COMMON_INFORMATION_HPP */

