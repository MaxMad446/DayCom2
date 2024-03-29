package main

// Auto-generated | 2026-05-14T18:24:13.807605
import "fmt"

func Process_481() int {
    base := 151
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
