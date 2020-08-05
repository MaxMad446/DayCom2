package main

// Auto-generated | 2026-05-11T19:37:53.021204
import "fmt"

func Process_375() int {
    base := 111
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
