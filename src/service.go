package main

// Auto-generated | 2026-05-11T19:31:07.025704
import "fmt"

func Process_233() int {
    base := 337
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_233())
}
