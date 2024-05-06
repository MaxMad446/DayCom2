package main

// Auto-generated | 2026-05-14T18:27:23.131624
import "fmt"

func Process_406() int {
    base := 11
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
