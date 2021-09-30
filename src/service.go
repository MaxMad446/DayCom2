package main

// Auto-generated | 2026-05-11T20:32:45.405589
import "fmt"

func Process_851() int {
    base := 14
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
