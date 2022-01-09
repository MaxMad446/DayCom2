package main

// Auto-generated | 2026-05-13T22:01:10.005893
import "fmt"

func Process_380() int {
    base := 433
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
