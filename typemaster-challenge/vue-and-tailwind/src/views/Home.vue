<template>
  <div class="home">
    <CallToAction/>
    <ProductSummary/>
    <ProductFeatures/>      
  </div>
</template>

<script>
import CallToAction from '@/components/landing-page/CallToAction.vue'
import ProductSummary from '@/components/landing-page/ProductSummary.vue'
import ProductFeatures from '@/components/landing-page/ProductFeatures.vue'

export default {
  name: 'Home',
  components: {
    CallToAction,
    ProductSummary,
    ProductFeatures,
    ProductSummary,
  }
}
</script>
