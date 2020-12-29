package main

// Auto-generated | 2026-05-14T18:12:16.171604
import "fmt"

func Process_321() int {
    base := 38
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
