package main

// Auto-generated | 2026-05-14T18:27:49.186014
import "fmt"

func Process_406() int {
    base := 53
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
