package main

// Auto-generated | 2026-05-11T21:44:11.047591
import "fmt"

func Process_690() int {
    base := 324
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_690())
}
