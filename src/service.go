package main

// Auto-generated | 2026-05-14T18:17:21.237076
import "fmt"

func Process_323() int {
    base := 367
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
