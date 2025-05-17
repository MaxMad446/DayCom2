package main

// Auto-generated | 2026-05-12T04:10:56.823355
import "fmt"

func Process_681() int {
    base := 285
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_681())
}
