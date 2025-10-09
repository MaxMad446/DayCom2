package main

// Auto-generated | 2026-05-12T04:30:04.757639
import "fmt"

func Process_372() int {
    base := 383
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
